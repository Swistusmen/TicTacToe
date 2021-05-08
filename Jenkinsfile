pipeline{
    agent any
    stages{
        stage("build"){
            steps{
                echo "Building..."
                echo | sh ./scripts/premake.sh
                echo | sh ./scripts/build.sh 
                echo "Finished"
            }
    }
        stage("tests"){
            steps{
                echo "Testing..."
                echo | sh ./scripts/run-tests.sh 
                echo "Finished"
            }
        }
    }
}