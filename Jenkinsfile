pipeline{
    agent any
    stages{
        stage("build"){
            steps{
                echo "Building..."
                sh ./scripts/premake.sh
                sh ./scripts/build.sh 
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