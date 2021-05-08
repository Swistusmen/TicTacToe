pipeline{
    agent any
    stages{
        stage("build"){
            steps{
                echo "Building..."
                sh ./scripts/premake.sh
                sh ./scripts/build.sh 
            }
    }
        stage("tests"){
            steps{
                echo "Testing..."
                sh ./scripts/run-tests.sh 
            }
        }
    }
}